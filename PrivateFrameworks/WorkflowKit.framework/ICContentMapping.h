
@interface ICContentMapping : NSObject {
    NSDictionary * _definition;
}

@property (nonatomic, readonly) NSOrderedSet *contentItemClasses;
@property (nonatomic, readonly) NSDictionary *definition;
@property (nonatomic, readonly) NSString *destinationKey;
@property (nonatomic, readonly) NSString *destinationType;
@property (nonatomic, readonly) bool inputRequired;
@property (nonatomic, readonly) id parameterDefault;
@property (nonatomic, readonly) NSDictionary *parameterUI;
@property (nonatomic, readonly) bool skipURLEncoding;
@property (nonatomic, readonly) NSString *sourceKey;
@property (nonatomic, readonly) NSString *sourceType;
@property (nonatomic, readonly) bool supportsMultipleItems;
@property (nonatomic, readonly) NSDictionary *valueMapping;

- (void).cxx_destruct;
- (id)contentItemClasses;
- (id)definition;
- (id)destinationKey;
- (id)destinationType;
- (void)getContentCollection:(id /* block */)arg1 withInput:(id)arg2 parameters:(id)arg3;
- (void)getStringRepresentation:(id /* block */)arg1 withInput:(id)arg2 parameters:(id)arg3;
- (id)initWithDefinition:(id)arg1;
- (bool)inputRequired;
- (id)parameterDefault;
- (id)parameterUI;
- (bool)skipURLEncoding;
- (id)sourceKey;
- (id)sourceType;
- (bool)supportsMultipleItems;
- (id)valueMapping;

@end
