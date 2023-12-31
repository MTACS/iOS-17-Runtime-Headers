
@interface TTMutableParagraphStyle : TTParagraphStyle

@property (nonatomic) long long alignment;
@property (nonatomic) unsigned int hints;
@property (nonatomic) unsigned long long indent;
@property (nonatomic) bool needsListCleanup;
@property (nonatomic) bool needsParagraphCleanup;
@property (nonatomic) unsigned long long startingItemNumber;
@property (nonatomic) unsigned int style;
@property (nonatomic) long long writingDirection;

+ (id)paragraphStyleNamed:(unsigned int)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
