
@interface BRLTBrailleString : NSObject <NSCopying> {
    NSMutableArray * _brailleChars;
}

@property (nonatomic, readonly) NSArray *brailleChars;
@property (nonatomic, readonly) unsigned long long length;
@property (nonatomic, readonly) NSString *unicode;

+ (id)brfTable;
+ (id)brfToUnicode:(id)arg1;
+ (id)dinToUnicode:(id)arg1;
+ (bool)isValidBRF:(id)arg1;
+ (id)unicodeToBestEffortBrf:(id)arg1;
+ (id)unicodeToDin:(id)arg1;

- (void).cxx_destruct;
- (id)bestEffortBrf;
- (id)brailleChars;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithBrailleChars:(id)arg1;
- (id)initWithBrf:(id)arg1;
- (id)initWithUnicode:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToBrailleString:(id)arg1;
- (unsigned long long)length;
- (id)unicode;

@end
