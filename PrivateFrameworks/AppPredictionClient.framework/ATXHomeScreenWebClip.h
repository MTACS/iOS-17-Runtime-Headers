
@interface ATXHomeScreenWebClip : NSObject <ATXHomeScreenLeafIconRepresentable> {
    NSString * _name;
    NSURL * _url;
    NSString * _uuid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSURL *url;
@property (nonatomic, readonly, copy) NSString *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dictionaryRepresentationForIntrospection;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 name:(id)arg2 url:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXHomeScreenWebClip:(id)arg1;
- (id)name;
- (id)url;
- (id)uuid;

@end
