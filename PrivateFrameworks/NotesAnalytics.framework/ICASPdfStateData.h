
@interface ICASPdfStateData : NSObject <AADataEventType> {
    NSNumber * _hasFullScreenStateUsage;
    NSNumber * _hasLargeStateUsage;
    NSNumber * _hasMediumStateUsage;
    NSNumber * _hasSmallStateUsage;
    ICASPdfState * _pdfEndState;
    ICASPdfState * _pdfStartState;
}

@property (nonatomic, readonly) NSNumber *hasFullScreenStateUsage;
@property (nonatomic, readonly) NSNumber *hasLargeStateUsage;
@property (nonatomic, readonly) NSNumber *hasMediumStateUsage;
@property (nonatomic, readonly) NSNumber *hasSmallStateUsage;
@property (nonatomic, readonly) ICASPdfState *pdfEndState;
@property (nonatomic, readonly) ICASPdfState *pdfStartState;

+ (id)dataName;

- (void).cxx_destruct;
- (id)hasFullScreenStateUsage;
- (id)hasLargeStateUsage;
- (id)hasMediumStateUsage;
- (id)hasSmallStateUsage;
- (id)initWithPdfStartState:(id)arg1 pdfEndState:(id)arg2 hasSmallStateUsage:(id)arg3 hasMediumStateUsage:(id)arg4 hasLargeStateUsage:(id)arg5 hasFullScreenStateUsage:(id)arg6;
- (id)pdfEndState;
- (id)pdfStartState;
- (id)toDict;

@end
