
@interface NUEmbedData : SXJSONObject <SXEmbedType>

@property (nonatomic, readonly) unsigned long long autoPlayMedia;
@property (nonatomic, readonly) NSURL *baseURL;
@property (nonatomic, readonly) NSString *bodyHTML;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *enclosingHTML;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *javaScript;
@property (nonatomic, readonly) double maximumWidth;
@property (nonatomic, readonly) double minimumWidth;
@property (readonly) Class superclass;

- (unsigned long long)autoPlayMediaWithValue:(id)arg1 withType:(int)arg2;

@end
