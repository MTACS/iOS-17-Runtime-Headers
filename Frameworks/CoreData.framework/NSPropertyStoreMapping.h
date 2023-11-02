
@interface NSPropertyStoreMapping : NSStoreMapping {
    NSPropertyDescription * _property;
}

- (void)dealloc;
- (id)description;
- (id)initWithProperty:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)property;

@end
