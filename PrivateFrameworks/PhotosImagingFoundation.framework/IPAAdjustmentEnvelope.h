
@interface IPAAdjustmentEnvelope : NSObject <NSCopying> {
    IPAAdjustmentStack * _adjustmentStack;
    NSString * _format;
    NSString * _formatVersion;
    NSString * _originator;
}

@property (nonatomic, retain) IPAAdjustmentStack *adjustmentStack;
@property (nonatomic, retain) NSString *format;
@property (nonatomic, retain) NSString *formatVersion;
@property (nonatomic, retain) NSString *originator;

- (void).cxx_destruct;
- (id)adjustmentStack;
- (bool)containsPhotoAdjustments;
- (bool)containsVideoAdjustments;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)format;
- (id)formatVersion;
- (id)originator;
- (id)photoAdjustmentStack;
- (void)setAdjustmentStack:(id)arg1;
- (void)setFormat:(id)arg1;
- (void)setFormatVersion:(id)arg1;
- (void)setOriginator:(id)arg1;
- (id)videoAdjustmentStack;

@end
