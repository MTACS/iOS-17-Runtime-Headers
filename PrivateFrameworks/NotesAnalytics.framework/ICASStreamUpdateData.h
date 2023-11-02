
@interface ICASStreamUpdateData : NSObject <AADataEventType> {
    NSNumber * _hasUpdates;
}

@property (nonatomic, readonly) NSNumber *hasUpdates;

+ (id)dataName;

- (void).cxx_destruct;
- (id)hasUpdates;
- (id)initWithHasUpdates:(id)arg1;
- (id)toDict;

@end
