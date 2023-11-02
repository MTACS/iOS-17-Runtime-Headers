
@interface MIContainerToken : NSObject <NSSecureCoding> {
    unsigned long long  _containerClass;
    NSURL * _containerURL;
    NSString * _identifier;
    bool  _isTransient;
    NSString * _personaUniqueString;
    NSData * _serializedContainerRepresentation;
}

@property (nonatomic, readonly) unsigned long long containerClass;
@property (nonatomic, readonly) NSURL *containerURL;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool isTransient;
@property (nonatomic, readonly, copy) NSString *personaUniqueString;
@property (nonatomic, readonly) NSData *serializedContainerRepresentation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)containerClass;
- (id)containerURL;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithContainer:(id)arg1;
- (bool)isTransient;
- (id)personaUniqueString;
- (id)serializedContainerRepresentation;

@end
