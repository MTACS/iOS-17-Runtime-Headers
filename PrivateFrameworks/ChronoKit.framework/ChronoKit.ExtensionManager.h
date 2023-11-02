
@interface ChronoKit.ExtensionManager : NSObject <LSApplicationWorkspaceObserverProtocol> {
    void _addedPublisher;
    void _extensionsPublisher;
    void _removedPublisher;
    void _updatedPublisher;
    void applicationWorkspace;
    void extensionFactory;
    void extensionsByIdentifier;
    void lookupLock;
    void nsExtensionDiscoverer;
    void nsExtensionDiscovererSubscription;
    void queue;
    void remoteWidgetExtensionProvider;
    void remoteWidgetExtensionSubscription;
    void removedPluginUUIDsByIdentifier;
    void requireValidExtensions;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)pluginsDidUninstall:(id)arg1;

@end
