
@interface TRIPBUninterpretedOption_NamePart : TRIPBMessage

@property (nonatomic) bool hasIsExtension;
@property (nonatomic) bool hasNamePart;
@property (nonatomic) bool isExtension;
@property (nonatomic, copy) NSString *namePart;

+ (id)descriptor;

@end
