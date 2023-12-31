
@interface NUErrorMessage : NSObject <NSCopying> {
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)subtitle;
- (id)title;

@end
