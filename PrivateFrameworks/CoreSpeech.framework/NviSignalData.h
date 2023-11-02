
@interface NviSignalData : NSObject <NSCoding> {
    unsigned long long  _sigGenTs;
    unsigned long long  _sigType;
}

@property (nonatomic) unsigned long long sigGenTs;
@property (nonatomic) unsigned long long sigType;

+ (id)headerString;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSignalType:(unsigned long long)arg1 timestamp:(unsigned long long)arg2;
- (void)setSigGenTs:(unsigned long long)arg1;
- (void)setSigType:(unsigned long long)arg1;
- (unsigned long long)sigGenTs;
- (unsigned long long)sigType;
- (id)stringForLogging;

@end
