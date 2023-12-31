
@interface VUIDebugMetricsImpression : NSObject {
    NSString * _idType;
    NSDictionary * _mainValues;
    NSArray * _orderedOtherKeys;
    NSDictionary * _otherValues;
}

@property (nonatomic, readonly) NSString *idType;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *impressionId;
@property (nonatomic, readonly) NSString *impressionIndex;
@property (nonatomic, retain) NSDictionary *mainValues;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, retain) NSArray *orderedOtherKeys;
@property (nonatomic, retain) NSDictionary *otherValues;
@property (nonatomic, readonly) NSString *parentId;
@property (nonatomic, readonly) NSString *type;

- (void).cxx_destruct;
- (id)idType;
- (id)identifier;
- (id)impressionId;
- (id)impressionIndex;
- (id)initWithDictionary:(id)arg1;
- (id)mainValues;
- (id)name;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)orderedOtherKeys;
- (id)otherValues;
- (id)parentId;
- (void)setMainValues:(id)arg1;
- (void)setOrderedOtherKeys:(id)arg1;
- (void)setOtherValues:(id)arg1;
- (id)type;

@end
