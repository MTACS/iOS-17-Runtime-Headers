
@interface VNDisallowedList : NSObject <NSCopying> {
    NSSet * _identifiers;
}

@property (readonly, copy) NSSet *allIdentifiers;
@property (readonly) unsigned long long identifierCount;

+ (id)disallowedListFromUTF8StringArray:(const char **)arg1;
+ (id)sceneNetV3;
+ (id)sceneNetV5;

- (void).cxx_destruct;
- (id)allIdentifiers;
- (bool)containsIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (unsigned long long)identifierCount;
- (id)initWithIdentifiers:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
