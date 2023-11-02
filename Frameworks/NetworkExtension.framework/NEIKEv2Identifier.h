
@interface NEIKEv2Identifier : NSObject <NEPrettyDescription, NSCopying> {
    NSData * _identifierData;
}

@property (retain) NSData *identifierData;
@property (readonly) unsigned long long identifierType;
@property (readonly) NSString *stringValue;

+ (id)copyTypeDescription;
+ (id)createIdentifierWithType:(unsigned long long)arg1 data:(id)arg2;
+ (id)createIdentifierWithType:(unsigned long long)arg1 data:(id)arg2 zone:(struct _NSZone { }*)arg3;

- (void).cxx_destruct;
- (id)copyShortDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (unsigned long long)hash;
- (id)identifierData;
- (unsigned long long)identifierType;
- (bool)isEqual:(id)arg1;
- (void)setIdentifierData:(id)arg1;
- (id)stringValue;

@end
