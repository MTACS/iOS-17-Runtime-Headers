
@interface CNDuplicateSetContactImage : NSManagedObject

@property (nonatomic, copy) NSString *cropRectString;
@property (nonatomic, retain) CNDuplicateSet *duplicateSet;
@property (nonatomic, copy) NSData *fullscreenImageData;
@property (nonatomic, copy) NSData *imageData;
@property (nonatomic, copy) NSData *imageHash;
@property (nonatomic, copy) NSString *imageType;
@property (nonatomic, copy) NSData *memojiMetadata;
@property (nonatomic, copy) NSData *thumbnailImageData;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
