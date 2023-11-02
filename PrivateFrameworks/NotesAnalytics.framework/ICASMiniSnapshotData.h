
@interface ICASMiniSnapshotData : NSObject <AADataEventType> {
    NSArray * _miniAccountSummary;
}

@property (nonatomic, readonly) NSArray *miniAccountSummary;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithMiniAccountSummary:(id)arg1;
- (id)miniAccountSummary;
- (id)toDict;

@end
