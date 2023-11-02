
@interface AFDeviceContextHistoryConfiguration : NSObject <AFDictionaryConvertible, NSCopying, NSSecureCoding> {
    unsigned long long  _historyBufferSize;
    bool  _keepsHistory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long historyBufferSize;
@property (nonatomic, readonly) bool keepsHistory;
@property (readonly) Class superclass;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)buildDictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)historyBufferSize;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithKeepsHistory:(bool)arg1 historyBufferSize:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)keepsHistory;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;

@end
