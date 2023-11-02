
@interface AFHomeAnnouncement : NSObject <AFDictionaryConvertible, NSCopying, NSSecureCoding> {
    NSDate * _finishedDate;
    unsigned long long  _finishedHostTime;
    NSString * _identifier;
    NSDate * _startedDate;
    unsigned long long  _startedHostTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDate *finishedDate;
@property (nonatomic, readonly) unsigned long long finishedHostTime;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSDate *startedDate;
@property (nonatomic, readonly) unsigned long long startedHostTime;
@property (readonly) Class superclass;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)buildDictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)finishedDate;
- (unsigned long long)finishedHostTime;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithIdentifier:(id)arg1 startedHostTime:(unsigned long long)arg2 finishedHostTime:(unsigned long long)arg3 startedDate:(id)arg4 finishedDate:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (id)startedDate;
- (unsigned long long)startedHostTime;

@end
