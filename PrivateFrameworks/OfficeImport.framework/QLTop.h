
@interface QLTop : NSObject <OCDReaderDelegate> {
    CMArchiveManager * _archiver;
    OCDDocument * _document;
    NSString * _fileName;
    bool  _forIndexing;
    unsigned long long  _format;
    CMMapper * _mapper;
    CMState * _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool forIndexing;
@property (readonly) unsigned long long hash;
@property (readonly) CMMapper *mapper;
@property (readonly) CMState *state;
@property (readonly) Class superclass;

+ (void)fillHTMLArchiveForOfficeData:(id)arg1 fileName:(id)arg2 dataFormat:(unsigned long long)arg3 archiver:(id)arg4;
+ (void)fillHTMLArchiveForOfficeFile:(id)arg1 dataFormat:(unsigned long long)arg2 archiver:(id)arg3;
+ (void)fillHTMLArchiveForOfficeFile:(id)arg1 orData:(id)arg2 dataFileName:(id)arg3 dataFormat:(unsigned long long)arg4 archiver:(id)arg5;
+ (id)metadataForBinaryOfficeFileAtURL:(id)arg1 error:(id*)arg2;
+ (id)searchableAttributesForBinaryOfficeFileAtURL:(id)arg1 error:(id*)arg2;
+ (bool)supportsProgressiveMapping;

- (void).cxx_destruct;
- (id)documentWithFile:(id)arg1 orData:(id)arg2 isXML:(bool)arg3 archiver:(id)arg4;
- (bool)forIndexing;
- (void)initializeClasses;
- (id)mapper;
- (Class)mapperClassForIndexing:(bool)arg1;
- (void)readFile:(id)arg1 orData:(id)arg2 dataFileName:(id)arg3 format:(unsigned long long)arg4 archiver:(id)arg5 forIndexing:(bool)arg6;
- (Class)readerClassForBinaryDocuments;
- (Class)readerClassForXMLDocuments;
- (void)readerDidEndDocument:(id)arg1;
- (void)readerDidReadElement:(id)arg1 atIndex:(unsigned long long)arg2 inDocument:(id)arg3 isLastElement:(bool)arg4;
- (void)readerDidStartDocument:(id)arg1 withElementCount:(long long)arg2;
- (void)setForIndexing:(bool)arg1;
- (void)setupMappingStateWithDocument:(id)arg1;
- (id)state;
- (Class)stateClass;

@end
