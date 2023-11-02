
@interface SecConcrete_sec_protocol_configuration_builder : NSObject <OS_sec_protocol_configuration_builder> {
    struct __CFDictionary { } * dictionary;
    bool  is_apple;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)init;
- (id)initWithDictionary:(struct __CFDictionary { }*)arg1 andInternalFlag:(bool)arg2;

@end
