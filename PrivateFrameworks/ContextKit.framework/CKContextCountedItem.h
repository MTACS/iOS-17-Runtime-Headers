
@interface CKContextCountedItem : NSObject <NSSecureCoding> {
    unsigned long long  _count;
    id  _item;
}

@property (nonatomic) unsigned long long count;
@property (nonatomic, retain) id item;

+ (id)item:(id)arg1 withCount:(unsigned long long)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)item;
- (void)setCount:(unsigned long long)arg1;
- (void)setItem:(id)arg1;

@end
