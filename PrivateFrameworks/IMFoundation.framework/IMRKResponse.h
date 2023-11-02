
@interface IMRKResponse : NSObject {
    NSDictionary * _attributes;
    NSString * _category;
    NSString * _string;
}

@property (readonly) NSDictionary *attributes;
@property (readonly) NSString *category;
@property (readonly) NSString *string;

+ (Class)__class;
+ (id)alloc;

- (void).cxx_destruct;
- (id)attributes;
- (id)category;
- (id)string;

@end
