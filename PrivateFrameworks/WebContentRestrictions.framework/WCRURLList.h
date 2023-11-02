
@interface WCRURLList : NSObject {
    NSMutableArray * _urlStringList;
}

@property (retain) NSMutableArray *urlStringList;

+ (id)_formattedStringFromURLString:(id)arg1 fromBrowser:(bool)arg2 removePort:(bool)arg3;

- (void).cxx_destruct;
- (void)addURLString:(id)arg1;
- (bool)containsURLString:(id)arg1;
- (id)init;
- (void)setUrlStringList:(id)arg1;
- (id)urlStringList;

@end
