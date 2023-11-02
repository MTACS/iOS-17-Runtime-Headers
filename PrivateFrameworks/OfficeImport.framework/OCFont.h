
@interface OCFont : NSObject {
    bool  _bold;
    bool  _italic;
    OCFontSubfamily * _subfamily;
}

@property (nonatomic) bool bold;
@property (nonatomic) bool italic;
@property (nonatomic, readonly) OCFontSubfamily *subfamily;

+ (id)fontWithSubfamily:(id)arg1 bold:(bool)arg2 italic:(bool)arg3;

- (void).cxx_destruct;
- (bool)bold;
- (id)initWithSubfamily:(id)arg1 bold:(bool)arg2 italic:(bool)arg3;
- (bool)italic;
- (void)setBold:(bool)arg1;
- (void)setItalic:(bool)arg1;
- (id)subfamily;

@end
