
@interface TSUProgressReporter : NSObject <NSProgressReporting> {
    NSProgress * _progress;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSProgress *progress;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithTotalUnitCount:(long long)arg1;
- (id)progress;

@end
