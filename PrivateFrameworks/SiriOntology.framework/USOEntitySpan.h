
@interface USOEntitySpan : NSObject <NSSecureCoding> {
    NSMutableArray * _alternatives;
    NSNumber * _endIndex;
    NSString * _label;
    USOMatchInfo * _matchInfo;
    NSString * _originAppId;
    NSString * _originEntityId;
    NSMutableArray * _properties;
    NSNumber * _sourceComponent;
    NSNumber * _startIndex;
}

@property (nonatomic, retain) NSMutableArray *alternatives;
@property (nonatomic, retain) NSNumber *endIndex;
@property (nonatomic, retain) NSString *label;
@property (nonatomic, retain) USOMatchInfo *matchInfo;
@property (nonatomic, retain) NSString *originAppId;
@property (nonatomic, retain) NSString *originEntityId;
@property (nonatomic, retain) NSMutableArray *properties;
@property (nonatomic, retain) NSNumber *sourceComponent;
@property (nonatomic, retain) NSNumber *startIndex;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addAlternative:(id)arg1;
- (void)addSpanProperty:(id)arg1;
- (id)alternatives;
- (void)encodeWithCoder:(id)arg1;
- (id)endIndex;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginAppId:(id)arg1 sourceComponent:(unsigned int)arg2 label:(id)arg3 matchInfo:(id)arg4 properties:(id)arg5 startIndex:(unsigned int)arg6 endIndex:(unsigned int)arg7 alternatives:(id)arg8 originEntityId:(id)arg9;
- (id)label;
- (id)matchInfo;
- (id)originAppId;
- (id)originEntityId;
- (id)properties;
- (void)setAlternatives:(id)arg1;
- (void)setEndIndex:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setMatchInfo:(id)arg1;
- (void)setOriginAppId:(id)arg1;
- (void)setOriginEntityId:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setSourceComponent:(id)arg1;
- (void)setStartIndex:(id)arg1;
- (id)sourceComponent;
- (id)startIndex;

@end
