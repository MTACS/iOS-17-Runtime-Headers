
@interface SKActionTable : NSObject <NSSecureCoding> {
    NSMutableDictionary * __info;
    NSDictionary * _actionTableDictionary;
}

@property (nonatomic, retain) NSMutableDictionary *_info;
@property (nonatomic, readonly, retain) NSDictionary *actionTableDictionary;

+ (id)actionTableWithContentsOfDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_info;
- (id)actionForName:(id)arg1;
- (id)actionTableDictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfDictionary:(id)arg1;
- (bool)isEqualToActionTable:(id)arg1;
- (void)set_info:(id)arg1;

@end
