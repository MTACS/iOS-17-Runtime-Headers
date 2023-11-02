
@interface OCFontSubfamily : NSObject {
    OCFontMetadata * _metadata;
    NSString * _name;
}

@property (nonatomic, readonly) OCFontMetadata *metadata;
@property (nonatomic, readonly) NSString *name;

+ (id)fontSubfamilyWithName:(id)arg1 metadata:(id)arg2;

- (void).cxx_destruct;
- (id)initWithName:(id)arg1 metadata:(id)arg2;
- (id)metadata;
- (id)name;

@end
