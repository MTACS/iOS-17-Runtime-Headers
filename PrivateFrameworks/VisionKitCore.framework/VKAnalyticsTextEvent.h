
@interface VKAnalyticsTextEvent : VKAnalyticsEvent {
    long long  _eventType;
    bool  _includesRichPasteboardContent;
    SEL  _macOSKBNavigationSelector;
    unsigned long long  _selectionLength;
    unsigned long long  _selectionWordCount;
    long long  _source;
    long long  _textEventType;
    unsigned long long  _totalLength;
}

@property (nonatomic, readonly) long long eventType;
@property (nonatomic) bool includesRichPasteboardContent;
@property (nonatomic) SEL macOSKBNavigationSelector;
@property (nonatomic) unsigned long long selectionLength;
@property (nonatomic) unsigned long long selectionWordCount;
@property (nonatomic) long long source;
@property (nonatomic) long long textEventType;
@property (nonatomic) unsigned long long totalLength;

- (id)coreAnalyticsDictionary;
- (id)description;
- (id)eventKey;
- (long long)eventType;
- (bool)includesRichPasteboardContent;
- (id)initWithSelectionLength:(unsigned long long)arg1 totalLength:(unsigned long long)arg2 selectionWordCount:(unsigned long long)arg3 macOSSelector:(SEL)arg4 includesRichPasteBoardContent:(bool)arg5 eventType:(long long)arg6 source:(long long)arg7 customIdentifier:(id)arg8;
- (SEL)macOSKBNavigationSelector;
- (unsigned long long)selectionLength;
- (unsigned long long)selectionWordCount;
- (void)setIncludesRichPasteboardContent:(bool)arg1;
- (void)setMacOSKBNavigationSelector:(SEL)arg1;
- (void)setSelectionLength:(unsigned long long)arg1;
- (void)setSelectionWordCount:(unsigned long long)arg1;
- (void)setSource:(long long)arg1;
- (void)setTextEventType:(long long)arg1;
- (void)setTotalLength:(unsigned long long)arg1;
- (long long)source;
- (long long)textEventType;
- (unsigned long long)totalLength;
- (long long)type;

@end
