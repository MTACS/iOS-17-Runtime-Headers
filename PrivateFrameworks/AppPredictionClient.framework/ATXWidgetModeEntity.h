
@interface ATXWidgetModeEntity : NSObject <ATXModeEntityProtocol> {
    ATXModeEntityScore * _scoreMetadata;
    CHSWidget * _widget;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ATXModeEntityScore *scoreMetadata;
@property (readonly) Class superclass;
@property (nonatomic, copy) CHSWidget *widget;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithWidget:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonDict;
- (id)scoreMetadata;
- (void)setScoreMetadata:(id)arg1;
- (void)setWidget:(id)arg1;
- (id)widget;

@end
