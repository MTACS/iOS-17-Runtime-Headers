
@interface SASTTemplateContentRating : SASTTemplateRating

@property (nonatomic, copy) NSString *system;
@property (nonatomic, copy) NSString *value;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setSystem:(id)arg1;
- (void)setValue:(id)arg1;
- (id)system;
- (id)value;

@end
