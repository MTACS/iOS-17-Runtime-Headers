
@interface AFOpportuneSpeakingModuleDataCollectionSanitizedSpeakable : NSObject {
    NSDate * _date;
    NSString * _identifier;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSString *identifier;

- (void).cxx_destruct;
- (id)date;
- (id)identifier;
- (id)initWithDate:(id)arg1;
- (bool)isOlderThan:(id)arg1;

@end
