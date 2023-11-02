
@interface AUAudioUnitProperty : NSObject <NSSecureCoding> {
    unsigned int  _element;
    NSString * _key;
    unsigned int  _scope;
    unsigned int  _v2propID;
}

+ (id)propertyWithKey:(id)arg1;
+ (id)propertyWithKey:(id)arg1 scope:(unsigned int)arg2 element:(unsigned int)arg3;
+ (id)propertyWithKey:(id)arg1 v2propID:(unsigned int)arg2 scope:(unsigned int)arg3 element:(unsigned int)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1;
- (id)initWithKey:(id)arg1 scope:(unsigned int)arg2 element:(unsigned int)arg3;
- (id)initWithKey:(id)arg1 v2propID:(unsigned int)arg2 scope:(unsigned int)arg3 element:(unsigned int)arg4;

@end
