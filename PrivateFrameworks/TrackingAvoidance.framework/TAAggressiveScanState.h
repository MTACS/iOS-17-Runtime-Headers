
@interface TAAggressiveScanState : NSObject <OSLogCoding, TAEventProtocol> {
    NSDate * _date;
    unsigned long long  _state;
}

@property (nonatomic, readonly, copy) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long state;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (id)descriptionDictionary;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithOSLogCoder:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3;
- (id)getDate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithState:(unsigned long long)arg1 date:(id)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)state;

@end
