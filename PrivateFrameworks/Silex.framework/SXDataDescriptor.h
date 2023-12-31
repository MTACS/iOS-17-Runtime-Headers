
@interface SXDataDescriptor : SXJSONObject

@property (nonatomic, readonly) unsigned long long dataType;
@property (nonatomic, readonly) SXDataFormat *format;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) SXFormattedText *label;

- (unsigned long long)dataTypeWithValue:(id)arg1 withType:(int)arg2;
- (id)description;
- (id)formatWithValue:(id)arg1 withType:(int)arg2;
- (id)labelWithValue:(id)arg1 withType:(int)arg2;

@end
