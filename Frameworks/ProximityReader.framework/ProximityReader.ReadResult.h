
@interface ProximityReader.ReadResult : NSObject <NSSecureCoding> {
    void cardReaderBlob;
    void dataType;
    void generalCardData;
    void isPINFallback;
    void pinBypassed;
    void readOutcome;
    void transactionId;
    void vasEntries;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
