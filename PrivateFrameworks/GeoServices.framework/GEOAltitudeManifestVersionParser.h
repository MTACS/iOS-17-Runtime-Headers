
@interface GEOAltitudeManifestVersionParser : NSObject <NSXMLParserDelegate> {
    NSURL * _fileURL;
    NSError * _parseError;
    struct GEOOnce_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
        bool didRun; 
    }  _parsed;
    GEOFlyoverRegionVersions * _versions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithFileURL:(id)arg1;
- (id)parse:(id*)arg1;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;

@end
