
@interface ICTTMutableParagraphStyle : ICTTParagraphStyle

@property (nonatomic) long long alignment;
@property (nonatomic) unsigned long long blockQuoteLevel;
@property (nonatomic) unsigned int hints;
@property (nonatomic) unsigned long long indent;
@property (nonatomic) bool needsListCleanup;
@property (nonatomic) bool needsParagraphCleanup;
@property (nonatomic) unsigned long long startingItemNumber;
@property (nonatomic) unsigned int style;
@property (nonatomic, retain) ICTTTodo *todo;
@property (nonatomic, copy) NSUUID *uuid;
@property (nonatomic) long long writingDirection;

+ (id)paragraphStyleNamed:(unsigned int)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
