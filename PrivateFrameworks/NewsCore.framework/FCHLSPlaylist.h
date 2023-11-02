
@interface FCHLSPlaylist : NSObject <FCM3U8ParserDelegate> {
    NSArray * _groups;
    bool  _independentSegments;
    NSArray * _requestedBitrates;
    NSArray * _segments;
    NSDictionary * _sessionData;
    FCHLSPlaylistState * _state;
    NSArray * _streamInfs;
    NSMutableSet * _uniqueKeys;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (void)parser:(id)arg1 lineIsComment:(id)arg2;
- (void)parser:(id)arg1 lineIsTag:(id)arg2 value:(id)arg3 attributeList:(id)arg4;
- (void)parser:(id)arg1 lineIsURL:(id)arg2;
- (bool)parserShouldCollectLine:(id)arg1;

@end
