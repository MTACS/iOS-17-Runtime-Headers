
@interface SearchAttributes : INObject

@property (nonatomic, retain) NSNumber *isDolbyAtmos;
@property (nonatomic, retain) NSNumber *isDolbyVision;
@property (nonatomic, retain) NSNumber *isFree;
@property (nonatomic, retain) NSNumber *isHdr;
@property (nonatomic, retain) NSNumber *isUhd;

+ (bool)supportsSecureCoding;

- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;

@end
