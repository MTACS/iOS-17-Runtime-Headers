
@interface EDTableStyle : NSObject <NSCopying> {
    NSString * mName;
    EDKeyedCollection * mTableStyleElements;
}

+ (id)tableStyle;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)name;
- (void)setName:(id)arg1;
- (id)tableStyleElements;

@end
