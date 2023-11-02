
@interface ICTagAllTagsItemIdentifier : NSObject <ICItemIdentifier>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <ICItemIdentifier> *parentIdentifier;
@property (readonly) Class superclass;

+ (id)archiveIdentifier;
+ (id)displayText;
+ (id)sharedItemIdentifier;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
