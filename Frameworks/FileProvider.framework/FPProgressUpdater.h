
@interface FPProgressUpdater : NSObject <FPProgressProtocol> {
    FPProgressProxy * _progress;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) FPProgressProxy *progress;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)progress;
- (void)reportProgressUpdate:(long long)arg1 totalUnitCount:(long long)arg2 completedFileCount:(long long)arg3 totalFileCount:(long long)arg4;
- (void)setProgress:(id)arg1;

@end
