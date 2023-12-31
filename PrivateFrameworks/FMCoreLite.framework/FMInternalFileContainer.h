
@interface FMInternalFileContainer : NSObject <FMFileContainer> {
    NSURL * _url;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSURL *url;

- (void).cxx_destruct;
- (id)init;
- (id)internalContainerURL;
- (void)setUrl:(id)arg1;
- (id)url;

@end
