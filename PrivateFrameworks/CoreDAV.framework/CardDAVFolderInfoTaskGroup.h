
@interface CardDAVFolderInfoTaskGroup : CoreDAVContainerInfoTaskGroup {
    NSSet * _directoryGatewayURLs;
}

- (void).cxx_destruct;
- (id)_copyContainerParserMappings;
- (id)_copyContainerWithURL:(id)arg1 andProperties:(id)arg2;
- (int)containerInfoDepthForURL:(id)arg1;
- (id)initWithAccountInfoProvider:(id)arg1 containerURLs:(id)arg2 directoryGatewayURLs:(id)arg3 taskManager:(id)arg4;

@end
