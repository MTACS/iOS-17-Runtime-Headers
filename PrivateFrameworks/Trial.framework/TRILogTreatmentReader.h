
@interface TRILogTreatmentReader : NSObject {
    <TRIPaths> * _paths;
    int  _projectId;
}

@property (readonly) NSString *path;

+ (id)readerWithProjectId:(int)arg1 paths:(id)arg2;

- (void).cxx_destruct;
- (id)fetchRolloutLogNamespaces;
- (id)initWithProjectId:(int)arg1 paths:(id)arg2;
- (id)namespaceLoggingTreatmentPath;
- (id)path;
- (id)treatments;

@end
