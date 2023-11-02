
@interface CRKStudentKeepAliveFile : NSObject <CRKMarker> {
    <CRKMarker> * _fileMarker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool exists;
@property (nonatomic, readonly) <CRKMarker> *fileMarker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)fileURL;

- (void).cxx_destruct;
- (bool)createWithError:(id*)arg1;
- (bool)deleteWithError:(id*)arg1;
- (bool)exists;
- (id)fileMarker;
- (id)init;

@end
