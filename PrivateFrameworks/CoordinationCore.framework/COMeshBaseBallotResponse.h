
@interface COMeshBaseBallotResponse : COMeshResponse <COMeshBaseBallotCommandProtocol> {
    COBallot * _ballot;
    unsigned long long  _generation;
    long long  _variant;
}

@property (nonatomic, copy) COBallot *ballot;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long generation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long variant;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ballot;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)generation;
- (id)initWithBallot:(id)arg1 generation:(unsigned long long)arg2;
- (id)initWithBallot:(id)arg1 generation:(unsigned long long)arg2 variant:(long long)arg3;
- (id)initWithCoder:(id)arg1;
- (void)setBallot:(id)arg1;
- (long long)variant;

@end
