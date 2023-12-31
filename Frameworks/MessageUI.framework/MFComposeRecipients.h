
@interface MFComposeRecipients : NSObject <NSItemProviderReading> {
    NSArray * _recipients;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *recipients;
@property (readonly) Class superclass;

+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
+ (id)readableTypeIdentifiersForItemProvider;

- (void).cxx_destruct;
- (id)initWithRecipients:(id)arg1;
- (id)recipients;

@end
