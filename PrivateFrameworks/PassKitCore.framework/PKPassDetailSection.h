
@interface PKPassDetailSection : NSObject <NSCopying, NSSecureCoding> {
    NSString * _footer;
    NSString * _header;
    bool  _hidden;
    NSString * _identifier;
    NSString * _insertAfterSection;
    NSArray * _rows;
}

@property (nonatomic, retain) NSString *footer;
@property (nonatomic, retain) NSString *header;
@property (getter=isHidden, nonatomic, readonly) bool hidden;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, retain) NSString *insertAfterSection;
@property (nonatomic, retain) NSArray *rows;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)footer;
- (unsigned long long)hash;
- (id)header;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 allowedRows:(id)arg2 bundle:(id)arg3 privateBundle:(id)arg4;
- (id)initWithRows:(id)arg1;
- (id)insertAfterSection;
- (bool)isHidden;
- (id)rows;
- (void)setFooter:(id)arg1;
- (void)setHeader:(id)arg1;
- (void)setInsertAfterSection:(id)arg1;
- (void)setRows:(id)arg1;

@end
