
@interface INSystemAppMapper : NSObject {
    NSDictionary * _bundleIdentifierGroupingForIntentExecution;
    struct map<std::string, INSystemApp, std::less<std::string>, std::allocator<std::pair<const std::string, INSystemApp>>> { 
        struct __tree<std::__value_type<std::string, INSystemApp>, std::__map_value_compare<std::string, std::__value_type<std::string, INSystemApp>, std::less<std::string>>, std::allocator<std::__value_type<std::string, INSystemApp>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, INSystemApp>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, INSystemApp>, std::less<std::string>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _mapping;
}

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)supportedIntentsOverridesForBundleIdentifier:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)bundleIdentifiersForIntentExecutionMatchingBundleIdentifier:(id)arg1;
- (id)extensionToDisplayableAppBundleIdentifierMapping;
- (id)extensionToLaunchableAppBundleIdentifierMapping;
- (id)init;
- (id)matchForBundleIdentifier:(id)arg1;
- (id)resolvedAppMatchingExtensionBundleIdentifier:(id)arg1;
- (id)resolvedIntentForAccessibilityActionWithBundleIdentifier:(id)arg1 intentClassName:(id)arg2;
- (id)resolvedIntentMatchingAppBundleIdentifier:(id)arg1 preferredCallProvider:(long long)arg2 intentClassName:(id)arg3;
- (id)resolvedIntentMatchingExtensionBundleIdentifier:(id)arg1 preferredCallProvider:(long long)arg2 intentClassName:(id)arg3;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

+ (id)sharedMapper;

@end
