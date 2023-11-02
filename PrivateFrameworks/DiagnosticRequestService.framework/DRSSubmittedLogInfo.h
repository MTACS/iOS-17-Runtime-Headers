
@interface DRSSubmittedLogInfo : NSObject {
    NSString * _path;
    NSString * _sandboxExtension;
    bool  _transferOwnership;
}

@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) NSString *sandboxExtension;
@property (nonatomic, readonly) bool transferOwnership;

+ (id)submittedLogInfosFromPaths:(id)arg1 sandboxExtensions:(id)arg2 transferOwnerships:(id)arg3 successOut:(bool*)arg4;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithPath:(const char *)arg1 sandboxExtension:(const char *)arg2 transferOwnership:(bool)arg3;
- (id)path;
- (id)sandboxExtension;
- (bool)transferOwnership;

@end
