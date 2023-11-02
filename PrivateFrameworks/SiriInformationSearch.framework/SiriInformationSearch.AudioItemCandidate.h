
@interface SiriInformationSearch.AudioItemCandidate : NSObject {
    void artist;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  backingItem;
    void features;
    void identifier;
    void isDownloaded;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  itemType;
    void requiresSubscription;
    void score;
    void source;
    void title;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
