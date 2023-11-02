
@interface ICASNotesToPagesContextPathData : NSObject <AADataEventType> {
    ICASNotesToPagesContextPath * _notesToPagesContextPath;
}

@property (nonatomic, readonly) ICASNotesToPagesContextPath *notesToPagesContextPath;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithNotesToPagesContextPath:(id)arg1;
- (id)notesToPagesContextPath;
- (id)toDict;

@end
