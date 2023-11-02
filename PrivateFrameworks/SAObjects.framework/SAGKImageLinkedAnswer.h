
@interface SAGKImageLinkedAnswer : SAGKLinkedAnswer

@property (nonatomic, copy) NSNumber *fileSize;
@property (nonatomic, retain) SAUIImageResource *imageResource;

+ (id)imageLinkedAnswer;
+ (id)imageLinkedAnswerWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)fileSize;
- (id)groupIdentifier;
- (id)imageResource;
- (void)setFileSize:(id)arg1;
- (void)setImageResource:(id)arg1;

@end
