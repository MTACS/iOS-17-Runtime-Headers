
@interface _XREngineeringTypeBitRangeParser : XRXMLElementParser {
    long long  _end;
    long long  _start;
    NSString * _type;
}

@property (nonatomic) long long end;
@property (nonatomic) long long start;
@property (nonatomic, copy) NSString *type;

+ (id)_elementNameToClassMap;

- (void).cxx_destruct;
- (void)_handleCompletion;
- (long long)end;
- (void)setEnd:(long long)arg1;
- (void)setStart:(long long)arg1;
- (void)setType:(id)arg1;
- (long long)start;
- (id)type;

@end
