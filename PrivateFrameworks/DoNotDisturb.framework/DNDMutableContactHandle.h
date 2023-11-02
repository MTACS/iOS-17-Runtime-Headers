
@interface DNDMutableContactHandle : DNDContactHandle

@property (nonatomic, copy) NSString *contactIdentifier;
@property (nonatomic) unsigned long long type;
@property (nonatomic, copy) NSString *value;

- (void)setContactIdentifier:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setValue:(id)arg1;

@end
