
@interface PBFilterClassDescription : NSObject {
    NSDictionary * _attributes;
    NSArray * _inputKeys;
}

+ (id)classDescriptionForClass:(Class)arg1;

- (id)attributes;
- (id)initWithClass:(Class)arg1;
- (id)inputKeys;

@end
