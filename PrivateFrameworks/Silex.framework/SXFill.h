
@interface SXFill : SXJSONObject

@property (nonatomic, readonly) unsigned long long attachment;
@property (nonatomic, readonly) unsigned long long fillMode;
@property (nonatomic, readonly) unsigned long long horizontalAlignment;
@property (nonatomic, readonly) unsigned long long verticalAlignment;

- (unsigned long long)attachmentWithValue:(id)arg1 withType:(int)arg2;
- (unsigned long long)fillModeWithValue:(id)arg1 withType:(int)arg2;
- (unsigned long long)horizontalAlignmentWithValue:(id)arg1 withType:(int)arg2;
- (unsigned long long)verticalAlignmentWithValue:(id)arg1 withType:(int)arg2;

@end
